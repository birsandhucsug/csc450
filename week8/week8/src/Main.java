public class Main {

    public static void countUp() {
        for (int i = 0; i <= 20; i++) {
            System.out.println("Counting up: " + i);
        }
    }

    public static void countDown() {
        for (int i = 20; i >= 0; i--) {
            System.out.println("Counting down: " + i);
        }
    }

    public static void main(String[] args) {

        Thread t1 = new Thread(() -> countUp());
        t1.start();

        try {
            t1.join();
        } catch (InterruptedException e) {
            System.out.println("Thread interrupted");
        }

        Thread t2 = new Thread(() -> countDown());
        t2.start();

        try {
            t2.join();
        } catch (InterruptedException e) {
            System.out.println("Thread interrupted");
        }
    }
}