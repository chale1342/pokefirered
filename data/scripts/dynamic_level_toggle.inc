// Dynamic Level Scaling Option Script
// Place this in your scripts directory and call it from a menu or NPC
genericdynamicleveltoggle::
    lock
    faceplayer
    checkflag 0x8FFF // Use a free flag for dynamic scaling (replace 0x8FFF with your chosen flag)
    iftrue @disable
    msgbox gText_EnableDynamicScaling 0x6
    setflag 0x8FFF
    callasm DynamicLevelScaling_Enable
    goto @end
@disable:
    msgbox gText_DisableDynamicScaling 0x6
    clearflag 0x8FFF
    callasm DynamicLevelScaling_Disable
@end:
    release
    end

// ASM routines to set the C variable
global DynamicLevelScaling_Enable
DynamicLevelScaling_Enable:
    ldr r0, =gDynamicLevelScalingEnabled
    movs r1, #1
    strb r1, [r0]
    bx lr

global DynamicLevelScaling_Disable
DynamicLevelScaling_Disable:
    ldr r0, =gDynamicLevelScalingEnabled
    movs r1, #0
    strb r1, [r0]
    bx lr

// Texts (add to your text resources)
gText_EnableDynamicScaling:: .string "Dynamic Level Scaling enabled!\lWild Pokémon will scale to your party.\pPress A to continue.$"
gText_DisableDynamicScaling:: .string "Dynamic Level Scaling disabled!\lWild Pokémon will use default levels.\pPress A to continue.$"
