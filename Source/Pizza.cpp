#include "Pizza.h"

Pizza::Pizza() : Food("Pizza") {

    addStep("Step 1",
        { "Prepare dough", "Freeze cheese",
          "Eat flour raw", "Skip dough" }, 2);

    addStep("Step 2",
        { "Burn dough", "Let dough rise",
          "Freeze dough instantly", "Eat raw yeast" }, 1);

    addStep("Step 3",
        { "Freeze tomatoes", "Prepare sauce",
          "Drink raw flour", "Skip sauce" }, 1);

    addStep("Step 4",
        { "Fry dough", "Eat dough raw",
          "Freeze plate", "Spread dough" }, 3);

    addStep("Step 5",
        { "Burn toppings", "Remove dough",
          "Add sauce and toppings", "Freeze pizza" }, 2);

    addStep("Step 6",
        { "Freeze oven", "Bake pizza",
          "Eat raw dough", "Fry pizza" }, 1);

    addStep("Step 7",
        { "Burn slice", "Slice and serve",
          "Freeze pizza forever", "Re-bake endlessly" }, 1);
}