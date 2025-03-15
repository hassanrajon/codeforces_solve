public class DifferentStringMethods {
    public static void main(String[] args) {
        String first = "Hello, World!";
        String second = "   this is java assignment   ";
        System.out.println("Length of first: " + first.length());
        System.out.println("first in upper case: " + first.toUpperCase());
        System.out.println("first in lower case: " + first.toLowerCase());
        System.out.println("Trimmed second: '" + second.trim() + "'");
        System.out.println("Substring of first (0-5): " + first.substring(0, 5));
        System.out.println("Character at index 7 of first: " + first.charAt(7));
        String str3 = first + " " + second.trim();
        System.out.println("Concatenated string: " + str3);
        System.out.println("first after replacing 'o' with '0': " + first.replace('o', '0'));
        System.out.println("Does first contain 'World'? " + first.contains("World"));
        String[] words = first.split(" ");
        System.out.println("Words in first:");
        for (String word : words) {
            System.out.println(word);
        }
    }
}
