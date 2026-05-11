package simpleexample;

public interface Shape {
    <T> T accept(Visitor<T> visitor);
}
