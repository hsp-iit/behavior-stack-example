# behavior-stack-example

**TBD** description of Task, Skill and Components



Repository containing a simple example of the Behavior Stack.

This example contains:

**run_bt**: An executable that runs a BT.

**SimpleCounter**: A **component** that implements a counter. The counter has 2 [Remote Procedure Calls](https://www.yarp.it/git-master/rpc_ports.html) one to increase the counter and one to reset the counter.

**ConditionExample:** A **skill** that when *starts* request to SimpleCounter its counter value and returns to the BT on a *success* state if the counter is different that to 10; it returns  a *failure* state otherwise.

**ActionExample** A **skill** that when *starts* request to SimpleCounter to increase the counter by 1 every second. When the skill *stops*, it resets the counter.

**UNDER CONSTRUCTION**


## Dependencies

- [YARP](https://www.yarp.it/) 
- [BehaviorTree.cpp](https://github.com/BehaviorTree/BehaviorTree.CPP/) 
- [Groot](https://github.com/BehaviorTree/Groot/) (For behavior trees visualization, optional)
- [GammaRay](https://www.kdab.com/development-resources/qt-tools/gammaray/) (State Chart visualization, optional)





## Installation (Tested on Ubuntu 20.04)

Install Dependencies:

- **YARP**: Follow the instructions [here](http://yarp.it/git-master/install.html).

- **Behavior Tree.cpp**: (use a specific commit) run :

  `git clone https://github.com/BehaviorTree/BehaviorTree.CPP.git`

  `git checkout 5e8e2da2d93139fdf5f5d188e6dedf4e8180cf15 `

  Then install the library:

  `cd BehaviorTree.CPP`

  `mkdir build;cd build`

  `cmake ..`

  `make`

  `sudo make install` **WARNING! this installs the library system wide**

- **Groot**: Follow the instructions [here](https://github.com/BehaviorTree/Groot/).

- **GammaRay:** 

  add the following ppa :

  `sudo add-apt-repository -s -y ppa:robotology/test`

  `sudo apt install -y \
          gammaray \
          gammaray-plugin-quickinspector \
          gammaray-plugin-statemachineviewer`

Clone and compile this library:

`git clone https://github.com/hsp-iit/behavior-stack-example` 

`mkdir build;cd build`

`cmake ..`

`make`

go to the bin directory:

`cd bin`

and run the following executables:

1. `./simple_counter`

2. `./condition_example`
3. `./action_example`
4. `run_bt --from ./BT_example.xml`



if you have GammaRay installed, run the executables 2. e 3. as:

`gammaray ConditionExample`

`gammaray ActionExample`



and then select the tab "StateMachine" to see the execution of the skill, as in the figure below:

**TBD**

If you have Groot installed, execute it in "Monitor Mode" and then click "Connect" to see the execution of the BT, as in the figure below



**TBD**



















