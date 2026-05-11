#include "Fries.h"

Fries::Fries() : Food("Fries") {

    addStep("Step 1",
        { "Wash potatoes", "Eat raw potatoes",
        "Burn potatoes", "Freeze oil" }, 'A');

    addStep("Step 2",
        { "Peel potatoes", "Drink water",
        "Freeze knife", "Skip peeling" }, 'A');

    addStep("Step 3",
        { "Cut into strips", "Mash raw meat",
        "Freeze potatoes whole", "Burn knife" }, 'A');

    addStep("Step 4",
        { "Soak in water", "Fry raw",
        "Burn water", "Skip soaking" }, 'A');

    addStep("Step 5",
        { "Dry potatoes", "Freeze wet potatoes",
        "Eat soaked potatoes", "Boil oil" }, 'A');

    addStep("Step 6",
        { "Deep fry potatoes", "Bake cheese",
        "Freeze fries", "Eat raw oil" }, 'A');

    addStep("Step 7",
        { "Season and serve", "Re-fry forever",
        "Freeze seasoning", "Burn fries" }, 'A');
}