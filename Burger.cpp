#include "Burger.h"

Burger::Burger() : Food("Burger") {

    addStep("Step 1",
        { "Prepare buns", "Eat raw bread dough",
        "Freeze beef", "Burn buns" }, 'A');

    addStep("Step 2",
        { "Shape patty", "Freeze buns",
        "Drink meat juice", "Skip patty" }, 'A');

    addStep("Step 3",
        { "Season patty", "Burn cheese",
        "Freeze grill", "Eat raw salt" }, 'A');

    addStep("Step 4",
        { "Grill patty", "Fry buns",
        "Freeze patty raw", "Boil bread" }, 'A');

    addStep("Step 5",
        { "Toast buns", "Freeze lettuce",
        "Burn ketchup", "Eat raw bun dough" }, 'A');

    addStep("Step 6",
        { "Add toppings", "Freeze burger",
        "Burn vegetables", "Skip assembly" }, 'A');

    addStep("Step 7",
        { "Assemble and serve", "Re-cook burger",
        "Freeze finished burger", "Disassemble" }, 'A');
}