package simpleexample;

public interface Visitor<T> {
    T visit(Circle circle);
    T visit(Rectangle rectangle);
}
