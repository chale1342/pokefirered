@ Pokemon FireRed Capture Experience - Assembly Implementation
@ This adds experience gain when catching Pokemon

@ Enhanced battle script for successful ball throws with capture experience
BattleScript_SuccessBallThrow::
	@ Check if it's a Safari Ball - don't increment capture count for Safari
	jumpifhalfword CMP_EQUAL, gLastUsedItem, ITEM_SAFARI_BALL, BattleScript_SafariNoIncGameStat
	incrementgamestat GAME_STAT_POKEMON_CAPTURES
	
	@ Safari Ball path - skip stat increment
BattleScript_SafariNoIncGameStat::
	printstring STRINGID_GOTCHAPKMNCAUGHT
	trysetcaughtmondexflags BattleScript_CaughtPokemonSkipNewDex
	
	@ Show Pokedex data first
	printstring STRINGID_PKMNDATAADDEDTODEX
	waitstate
	setbyte gBattleCommunication, 0
	displaydexinfo
	
BattleScript_CaughtPokemonSkipNewDex::
	@ GIVE CAPTURE EXPERIENCE HERE - This is the key part!
	givecaptureexp
	
	@ Continue with nickname prompt
	printstring STRINGID_GIVENICKNAMECAPTURED
	waitstate
	setbyte gBattleCommunication, 0
	trygivecaughtmonnick BattleScript_CaughtPokemonSkipNickname
	givecaughtmon
	printfromtable gCaughtMonStringIds
	waitmessage B_WAIT_TIME_LONG
	goto BattleScript_CaughtPokemonDone

@ Skip nickname path
BattleScript_CaughtPokemonSkipNickname::
	givecaughtmon

@ Final completion
BattleScript_CaughtPokemonDone::
	setbyte gBattleOutcome, B_OUTCOME_CAUGHT
	finishturn
