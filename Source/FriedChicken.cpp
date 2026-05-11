#include "FriedChicken.h"


FriedChicken::FriedChicken() : Food("Fried Chicken") {

    addStep("Step 1",
        { "Wash chicken", "Eat raw chicken",
        "Freeze oil", "Skip cleaning" }, 'A');

    addStep("Step 2",
        { "Marinate chicken", "Boil chicken instantly",
        "Burn chicken", "Freeze flour" }, 'A');

    addStep("Step 3",
        { "Prepare flour coating", "Drink seasoning",
        "Melt chicken", "Skip seasoning" }, 'A');

    addStep("Step 4",
        { "Coat chicken in flour", "Freeze chicken",
        "Bake raw", "Eat flour only" }, 'A');

    addStep("Step 5",
        { "Heat oil", "Freeze oil",
        "Drink oil", "Remove pan" }, 'A');

    addStep("Step 6",
        { "Deep fry chicken", "Bake bread",
        "Boil burger", "Freeze chicken" }, 'A');

    addStep("Step 7",
        { "Drain oil and serve", "Re-freeze chicken",
        "Burn chicken", "Mix with fries raw" }, 'A');
}