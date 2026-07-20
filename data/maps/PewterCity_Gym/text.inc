PewterCity_Gym_Text_BrockIntro::
    .string "So, you made it. I'm BROCK.\n"
    .string "PEWTER's GYM LEADER.\p"
    .string "My POKéMON and I don't budge easy.\n"
    .string "We're built on grit, not flash.\p"
    .string "Every one of my POKéMON is tough\n"
    .string "as bedrock. That's no accident.\p"
    .string "They're all ROCK type - and proud\n"
    .string "of it.\p"
    .string "So? Still want to challenge me,\n"
    .string "knowing the odds are against you?\p"
    .string "That's the kind of guts a real\n"
    .string "TRAINER needs. I respect that.\p"
    .string "Fine, then.\n"
    .string "Show me what you've got!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

@ NOTE: This defeat text actually causes a buffer overflow. It's too long for the gDisplayedStringBattle
@ buffer that it's put into, and it stomps all over the gBattleTextBuffs after, as well as the otherwise
@ unused array after that, sFlickerArray. Perhaps that's the reason why said array exists.
PewterCity_Gym_Text_BrockDefeat::
    .string "I got careless - underestimated\n"
    .string "you. My mistake.\p"
    .string "As proof of your victory, I want\n"
    .string "you to have this - the official\l"
    .string "POKéMON LEAGUE BOULDERBADGE.\p"
    .string "{FONT_NORMAL}{PLAYER} received the BOULDERBADGE\n"
    .string "from BROCK!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
    .string "{FONT_MALE}Carry the BOULDERBADGE and your\n"
    .string "POKéMON will fight harder for you.\p"
    .string "It'll also let you use FLASH\n"
    .string "outside of battle.\p"
    .string "Course, a POKéMON's still got to\n"
    .string "know FLASH first.$"

PewterCity_Gym_Text_TakeThisWithYou::
    .string "Hold on a second.\n"
    .string "Take this with you.$"

PewterCity_Gym_Text_ReceivedTM39FromBrock::
    .string "{PLAYER} received TM39\n"
    .string "from BROCK.$"

PewterCity_Gym_Text_ExplainTM39::
    .string "A TM - Technical Machine - holds a\n"
    .string "move your POKéMON can learn.\p"
    .string "Use one, and that POKéMON picks up\n"
    .string "the move right away.\p"
    .string "But it only works once, so choose\n"
    .string "carefully who gets it.\p"
    .string "This one's TM39 - ROCK TOMB.\p"
    .string "It hurls boulders at the foe and\n"
    .string "lowers its SPEED.$"

PewterCity_Gym_Text_BrockPostBattle::
    .string "There are all kinds of TRAINERS\n"
    .string "out there in this world.\p"
    .string "You've got real talent, though.\n"
    .string "I can tell.\p"
    .string "Here's some advice.\p"
    .string "Head to CERULEAN and test yourself\n"
    .string "against their GYM.$"

PewterCity_Gym_Text_DontHaveRoomForThis::
    .string "You don't have room for this.$"

PewterCity_Gym_Text_LiamIntro::
    .string "Stop right there, kid!\p"
    .string "You're ten thousand light-years \n"
    .string "from facing BROCK!$"

PewterCity_Gym_Text_LiamDefeat::
    .string "Darn!\p"
    .string "Light-years isn't time…\n"
    .string "It measures distance!$"

PewterCity_Gym_Text_LiamPostBattle::
    .string "You're pretty hot.\n"
    .string "…But not as hot as BROCK!$"

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
    .string "Hiya!\n"
    .string "Do you want to dream big?\p"
    .string "Do you dare to dream of becoming\n"
    .string "the POKéMON champ?\p"
    .string "I'm no TRAINER, but I can advise\n"
    .string "you on how to win.\p"
    .string "Let me take you to the top!$"

PewterCity_Gym_Text_LetsGetHappening::
    .string "All right!\n"
    .string "Let's get happening!$"

PewterCity_Gym_Text_TryDifferentPartyOrders::
    .string "The first POKéMON out in a match is\n"
    .string "at the left of the POKéMON LIST.\p"
    .string "By changing the order of POKéMON,\n"
    .string "you may gain an advantage.\p"
    .string "Try different orders to suit your\n"
    .string "opponent's party.$"

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
    .string "It's a free service!\n"
    .string "Let's get happening!$"

PewterCity_Gym_Text_YoureChampMaterial::
    .string "Just as I thought!\n"
    .string "You're POKéMON champ material!$"

PewterCity_Gym_Text_GymStatue::
    .string "PEWTER POKéMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "{RIVAL}$"

PewterCity_Gym_Text_GymStatuePlayerWon::
    .string "PEWTER POKéMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "{RIVAL}, {PLAYER}$"

