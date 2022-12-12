package model;

public class Dado {

    public int nFacce = 6;

    public int lancia() {

        return 1 + (int) (Math.random() * nFacce);
    }
}
