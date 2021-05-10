# SPlisHSPlasH with time data
This is a modified version of [SPlisHSPlasH](https://github.com/InteractiveComputerGraphics/SPlisHSPlasH). We modify it a little bit, so that it can generate time data in addition to position and velocity data, and it record data each simulation step rather than with a fixed ExportFPS.

____
## Build Instructions
Please refer to [SPlisHSPlasH Documentation](https://splishsplash.readthedocs.io/en/latest/about.html) for installing on Linux or Windows.
____
## Tips on Usage
Always refer to [SPlisHSPlasH Documentation](https://splishsplash.readthedocs.io/en/latest/about.html) for details. Here we share some experience and tips on using it.

The basic idea of SPlisHSPlasH is giving it a **.json** file which defines all the things including simulation method you'd like to use and initial scene you'd like to begin with. SPHSimulator in the *bin* directory will choose the corresponding model to run simulation. The state like position and velocity of particles will be recorded with a fixed frequency (but the version contained in this repository records the state data every time it updates). The recorded data will be stored in *bin/output/*
___
### Fluid Initialization
Fluid can be initialized with *FluidBlocks* or *FluidModels*. *FluidBlocks* defines a fluid block with coordinates, while with *FluidModels* you can directly give particle data to initialize it (.bgeo file). Details can be found in SPlisHSPlasH Documentation.
____
### Volume Sampling tool
In *bin* directory, there are tools like *VolumeSampling* and *SurfaceSampling*. They are not mentioned much in Documentation, but they might be useful for you, especially *VolumeSampling*. 

*VolumeSampling* can generate .bgeo file by sampling on a specific .obj file or on a region specified by corrdinates. You may refer to the source code of it for more details. In main function there are parameters you can input.
____
## Tips on further modification

1. We make it ignore exportFPS by modifying *SimulatorBase::step()* function.
2. We get time data from *TimeManager* class. It has *getCurrent()* function to get current time and *getTimeStepSize()* function to get current timestep, more specifically, the timestep that will be used in next update. Basically, we modify *Simulator/Exporter/ParticleExporter_Partio::writeParticlesPartio()* function so that it can record time data when exporting.