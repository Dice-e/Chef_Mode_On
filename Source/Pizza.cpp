#include "Pizza.h"

Pizza::Pizza() : Food("Pizza") {

    addStep("Step 1",
        { "Prepare dough", "Eat flour raw",
        "Freeze cheese", "Skip dough" }, 'A');

    addStep("Step 2",
        { "Let dough rise", "Burn dough",
        "Freeze dough instantly", "Eat raw yeast" }, 'A');

    addStep("Step 3",
        { "Prepare sauce", "Drink raw flour",
        "Freeze tomatoes", "Skip sauce" }, 'A');

    addStep("Step 4",
        { "Spread dough", "Fry dough",
        "Eat dough raw", "Freeze plate" }, 'A');

    addStep("Step 5",
        { "Add sauce and toppings", "Remove dough",
        "Burn toppings", "Freeze pizza" }, 'A');

    addStep("Step 6",
        { "Bake pizza", "Fry pizza",
        "Freeze oven", "Eat raw dough" }, 'A');

    addStep("Step 7",
        { "Slice and serve", "Freeze pizza forever",
        "Burn slice", "Re-bake endlessly" }, 'A');
}