To access the project files for this problem set go to the ios-nanodegree-obj-c-student repo and look in the “Problem Set” folder.

1) Annotate the PlaneTicket project. In the plane ticket project you'll see two classes, PlaneTicket and Passenger. Add nullability annotations to each. Remember you can check your work by inspecting the generated header.

2) Add nullability annotations to the classes Sweatshirt and WashingMachine in the Sweatshirt project.

3) Inspect the Animals_Swift project. Use what you've learned about avoiding the hazards of AnyObject to fix the two runtime errors.

4) Inspect the Toolbox project. Use what you've learned about avoiding the hazards of AnyObject to fix the runtime error.

5) The Regift Cocoapod uses the following enum to represent a Regift error:

    public enum RegiftError: String, ErrorType {
        case DestinationNotFound = "The temp file destination could not be created or found"
        case AddFrameToDestination = "An error occurred when adding a frame to the destination"
        case DestinationFinalize = "An error occurred when finalizing the destination"
    }
Edit this enum so that it can be consumed successfully by an Objective-C class. Submit your answer in a swift file.

6) Inspect the Guitar_SwiftSpecific project. You'll notice that there are 7 compiler errors. Fix these compiler errors by translating the Swift-specific code into code that can be consumed by Objective-C. Hint: start with the Swift structs.

7) Open up the GuitarString project and write some Objective-C code in the main.m file that will process an error from the method, pluck(). You will need to follow these steps:

Create an instance of the GuitarString class
Create an NSError object
With the GuitarString you created, call the method pluck(velocity: Float) - remember that it will have a different name once it has been translated to Objective-C.
Check if an error was returned
Log the error
8) Open up the RPS_MixedLanguage project and you'll see that it looks very much like the RockPaperScissors_CommandLine project, but the RPSTurn class has been written in Swift. Right now the code in the main.m file won't compile. Adjust the project settings and import statements so that the Swift and Objective-C classes in this project can work together. Remember to:

Ensure that any .m file that uses RPSTurn has imported the required header file
Ensure that any .h file that uses RPSTurn has forward-declared the class
Note that since you cannot use a Swift enum in an Objective-C header file, like RPSController.h, you will need to modify the method throwDown(). Experiment with different strategies and remember to visit the forum for advice if you get stuck.