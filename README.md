# Auto Battler
Prototype of a game idea where you play as Charon the ferryman of the Underworld and transport souls to their final resting places over the river.

Created using Unreal Engine 4. All features are fully written in C++ and Blueprints are used only to extend C++ when it's more reasonable to do so.

The game consists two major features that had to be prototyped:

Soul Trial:
Player chooses souls from the grid of 3x3. This happens by playing a type of solitaire, where the player's goal is to choose 5 souls from the grid.
Solitaire has a set of rules, if the soul has a coin it can not be removed from the grid. If a soul has no coin, it can be removed with another soul that has no coin from the grid. If the soul is alive can be removed from the list directly.
Every soul has Hp,Sin and Str, Active skill and Passive skill that helps on the journey.

Basic Game Loop: 
Soul uses its active skill and other souls passive skills activate if requirements are checked.
After all queued skills have activated, the soul attacks the enemy. Then the enemy attacks the souls with its attack. After that loop starts again.


Prototype Conclusion:
I have stopped the development of this idea. The prototype was successful, but since I was developing this game idea alone. 
I came to the conclusion that this game would take too long to become a published game.