package Belajar;

import java.util.*;

public class DeretFibonacci {
    public static void main(String[] args) {
        
        int i, n, fN1, fN2, fN;
        Scanner userInput = new Scanner(System.in);

        System.out.print("Masukkan Angka ");
        i = userInput.nextInt();
        System.out.print("Masukkan angka ");
        n = userInput.nextInt(); 
        // fN2 = 0;
        // fN1 = 1;
        // fN = 1;

        // for(int i = 1; i <= n; i++) {
        //     System.out.println("Bilangan fibonacci ke " + i + "adalah " + fN);
        //     fN = fN1 + fN2;
        //     fN2 = fN1;
        //     fN1 = fN;
        // }

        fN = 0;
        fN1 = 1;
        fN2 = 1;

        while(i <= n) {
            
            System.out.println("Bilangan fibonacci ke " + i + " adalah " + fN);
            fN = fN2 + fN1;
            fN2 = fN1;
            fN1 = fN;
            i++;
        } 
    }
}
