package calculator.parser;

import calculator.lexer.Token;

public class Binary implements Expr{

    final Expr left;
    final Token operator;
    final Expr right;

    public Binary(Expr left, Token operator, Expr right) {
        this.left = left;
        this.operator = operator;
        this.right = right;
    }

    @Override
    public <T> T accept(ExprVisitor<T> visitor) {
        return visitor.visitBinaryExpr(this);
    }
}
