package simpleexample;

import example.simple.AreaVisitor;
import example.simple.Circle;
import example.simple.Shape;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class AreaVisitorTest {

    @Test
    public void testVisit() {
        Shape circle = new Circle(1);
        double area = circle.accept(new AreaVisitor());
        assertEquals(3.14,area,0.01);
    }
}