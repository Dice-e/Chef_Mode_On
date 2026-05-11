#include "FriedChicken.h"

FriedChicken::FriedChicken() : Food("Fried Chicken") {

    addStep("Step 1",
        { "Freeze oil", "Eat raw chicken",
          "Skip cleaning", "Wash chicken" }, 3);

    addStep("Step 2",
        { "Burn chicken", "Marinate chicken",
          "Boil chicken instantly", "Freeze flour" }, 1);

    addStep("Step 3",
        { "Drink seasoning", "Skip seasoning",
          "Melt chicken", "Prepare flour coating" }, 3);

    addStep("Step 4",
        { "Bake raw", "Coat chicken in flour",
          "Eat flour only", "Freeze chicken" }, 1);

    addStep("Step 5",
        { "Freeze oil", "Drink oil",
          "Remove pan", "Heat oil" }, 3);

    addStep("Step 6",
        { "Bake bread", "Freeze chicken",
          "Deep fry chicken", "Boil burger" }, 2);

    addStep("Step 7",
        { "Mix with fries raw", "Drain oil and serve",
          "Re-freeze chicken", "Burn chicken" }, 1);
}