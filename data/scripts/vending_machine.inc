EventScript_VendingMachine::
	lock
	message Text_VendingMachineWelcome
	waitmessage
	special SetVendingMachineShop
	pokemart VendingMachine_Items
	msgbox Text_VendingMachineThanks
	release
	end

	.align 2
VendingMachine_Items::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE
	release
	end

Text_VendingMachineWelcome::
	.string "It's a supply vending machine.\p"
	.string "Stock up for the road?$"

Text_VendingMachineThanks::
	.string "Thank you! Safe travels!$"
