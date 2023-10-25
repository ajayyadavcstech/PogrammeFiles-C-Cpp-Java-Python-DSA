package ajay.print;

public class publicclass {
    int a = 1;
    public int b = 2;
    private int c = 3;
    protected int d = 4;

    void printdefault() {
        System.out.println("default method");
    }

    public void printpublic() {
        System.out.println("public method");
    }

    private void printprivate() {
        System.out.println("private method");
    }

    protected void printprotected() {
        System.out.println("protected method");
    }

}

class defaultclass{
    int a=4;

}
