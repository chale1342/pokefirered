# Poryscript Setup for Pokemon FireRed

## What is Poryscript?

Poryscript is a higher-level scripting language that compiles to Pokemon script assembly. It makes writing scripts much easier and more readable compared to raw assembly.

## Key Benefits:

1. **Cleaner syntax**: Use `if`, `switch`, `while` instead of goto statements
2. **Automatic text management**: Text strings are handled automatically  
3. **Type safety**: Better error checking at compile time
4. **Modern control flow**: No more manual label management

## Basic Syntax Examples:

### Simple NPC Dialog:
```poryscript
script MyNPC {
    lock
    faceplayer
    msgbox("Hello there!", MSGBOX_NPC)
    release
}
```

### Conditional Logic:
```poryscript
script ConditionalExample {
    if (flag(FLAG_BADGE_01_GET)) {
        msgbox("You have the Boulder Badge!", MSGBOX_NPC)
    } else {
        msgbox("You need to challenge Brock!", MSGBOX_NPC)
    }
}
```

### Switch Statements:
```poryscript
script SwitchExample {
    switch (var(VAR_STARTER_MON)) {
        case 0:
            msgbox("You chose Bulbasaur!", MSGBOX_NPC)
        case 1: 
            msgbox("You chose Charmander!", MSGBOX_NPC)
        case 2:
            msgbox("You chose Squirtle!", MSGBOX_NPC)
    }
}
```

## File Organization:

- Create `.pory` files in the same directories as your `.inc` files
- The Makefile will automatically compile `.pory` files to `.inc` files
- Example: `data/maps/PalletTown/scripts.pory` → `data/maps/PalletTown/scripts.inc`

## Getting Started:

1. Create a new `.pory` file in any map directory
2. Write your script using Poryscript syntax
3. Run `make` to compile it automatically

## VS Code Extension:

The Poryscript VS Code extension is installed and provides:
- Syntax highlighting
- Error checking
- Autocomplete for Pokemon script commands

Happy scripting!
