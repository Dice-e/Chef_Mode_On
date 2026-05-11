#include "Fries.h"

Fries::Fries() : Food("Fries") {

    addStep("Step 1",
        { "Freeze oil", "Eat raw potatoes",
          "Burn potatoes", "Wash potatoes" }, 3);

    addStep("Step 2",
        { "Drink water", "Peel potatoes",
          "Freeze knife", "Skip peeling" }, 1);

    addStep("Step 3",
        { "Burn knife", "Mash raw meat",
          "Freeze potatoes whole", "Cut into strips" }, 3);

    addStep("Step 4",
        { "Fry raw", "Soak in water",
          "Burn water", "Skip soaking" }, 1);

    addStep("Step 5",
        { "Freeze wet potatoes", "Boil oil",
          "Dry potatoes", "Eat soaked potatoes" }, 2);

    addStep("Step 6",
        { "Bake cheese", "Deep fry potatoes",
          "Freeze fries", "Eat raw oil" }, 1);

    addStep("Step 7",
        { "Re-fry forever", "Season and serve",
          "Freeze seasoning", "Burn fries" }, 1);
}