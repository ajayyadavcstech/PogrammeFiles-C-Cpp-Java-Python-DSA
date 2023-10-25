import javax.sound.midi.Soundbank;

class ekclass {
    int a;

    public ekclass(int a) {
        this.a = a;
    }

}

class doclass extends ekclass {
    int a=9;

    public doclass(int c) {
        super(c);
        System.out.println("doclass constructor");

    }

    public void printa(int a,int b){
    this.a=a;
    super.a=b;

    System.out.println(a+"  "+super.a);
    }

    }

public class Thisandsuper {
    public static void main(String[] args) {
        // ekclass c = new ekclass(5);

        doclass s = new doclass(4);
        System.out.println(s.a);
        s.printa(6, 3);

    }
}
