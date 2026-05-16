#include "IceCream.h"

IceCream::IceCream() : Food("Icecream") {

addStep("Step 1",
    { "Free the mixture", "Mix the ingredients",
      "Gather the ingredients", "Churn the mixture" }, 2);

addStep("Step 2",
    { "To melt the bowl", "Milk,cream,and sugar",
      "To dissolve the sugar", "To freeze it faster" }, 1);

addStep("Step 3",
    { "Cool the mixture", "Add candy",
      "To dissolve the sugar", "Serve it" }, 2);

addStep("Step 4",
    { "Blender", "Oven",
      "Let the mixture cool", "Skip soaking" }, 2);

addStep("Step 5",
    { "Freeze wet potatoes", "Ice cream maker",
      "Dry potatoes", "Serving and enjoying" }, 1);

addStep("Step 6",
    { "The mixture becomes creamy", "Deep fry potatoes",
      "Freeze fries", "Eat raw oil" }, 0);

addStep("Step 7",
    { "Re-fry forever", "Season and serve",
      "Freeze and serve the ice cream", "Burn fries" }, 2);
}

