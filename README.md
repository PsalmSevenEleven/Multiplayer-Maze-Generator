# Triiodide Technical Interview
 This Repo is a skill test  for a position at Triiodide
 
 MazeGenerator:
  Generates a maze based on a seed passed into it by the server. The grid width and height can be customized, as well as the size of the individual cells. It uses multiple overlaid noise patterns to generate "biomes" of darkness, claustrophobia, and light flicker. Darkness controls the likelihood of a light spawning in a given cell, claustrophobia controls the likelihood of a wall spawning in a given location, and light flicker controls how often a given light... will flicker. These biomes have controls for biome size and strength, and all meshes, lights, and level objectives are customizable.

ExitHatch:
 Generic end of level objective. It is currently represented as a door the players need to open, but it is vague enough to be implemented as some other objective. It will generate a customizable number and type of key.
 
 ExitKey:
  Spawned by the ExitHatch. When all of them have been "activated" the ExitHatch will... do whatever it needs to do. In this case, it's a trapdoor that opens. An ExitKey could be a lever, a valve, a generator, etc. In this case, they're just buttons.
  
  Anything with a CPP_ prefix is a class I implemented.
