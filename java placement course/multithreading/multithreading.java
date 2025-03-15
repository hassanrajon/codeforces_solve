public class multithreading {
    public static void main(String[] args) throws Exception {
        hi hiThread = new hi();
        hello helloThread = new hello();
        hiThread.setPriority(Thread.MAX_PRIORITY);
        helloThread.setPriority(Thread.MIN_PRIORITY);

        helloThread.start();
        hiThread.start();
        hiThread.join();
        helloThread.join();

        /*
         * to set name of a thread
         * thread_name.setName("");
         * to know the thread name
         * thread_name.getName();
         * 
         */
        /*
         * to setPriority or getPriority
         * thread_name.setPriority(int value);
         * thread_name.getPriority();
         * min priority = 1
         * max priority = 10
         * normal priority =5
         */
        System.out.println("bye");
    }
}

class hi extends Thread {
    @Override
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println("hi");
            try {
                Thread.sleep(500);
            } catch (Exception e) {
                // TODO: handle exception
            }
        }
    }
}

class hello extends Thread {
    @Override
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println("hello");
            try {
                Thread.sleep(500);
            } catch (Exception e) {
                // TODO: handle exception
            }
        }
    }
}