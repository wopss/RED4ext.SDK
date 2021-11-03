// custom class header you define in red4ext part
public native class MyCustomClass extends IScriptable {
    public native func GetNumber() -> Float
}

// quick attachment script that runs when the game loads
public class MyCustomClassPrinter extends ScriptableSystem {
    public func OnAttach() -> Void {
        LogChannel(n"DEBUG", "Hello!");
        let c = new MyCustomClass();
        LogChannel(n"DEBUG", "Number: " + FloatToString(c.GetNumber()));
    }
}
