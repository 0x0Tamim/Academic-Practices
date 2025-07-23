public class BinaryToDecimal {
    public static int bin2Dec(String binaryString) throws NumberFormatException {

        for (int i = 0; i < binaryString.length(); i++) {
            char c = binaryString.charAt(i);
            if (c != '0' && c != '1') {
                throw new NumberFormatException("The string is not a valid binary string.");
            }
        }
        int decimal = 0;
        int power = 0;

        for (int i = binaryString.length() - 1; i >= 0; i--) {
            if (binaryString.charAt(i) == '1') {
                decimal += Math.pow(2, power);
            }
            power++;
        }
        return decimal;
    }
    public static void main(String[] args) {
        try {
            String binaryString1 = "1010";
            String binaryString2 = "110011";
            System.out.println("Binary: " + binaryString1 + " => Decimal: " + bin2Dec(binaryString1));
            System.out.println("Binary: " + binaryString2 + " => Decimal: " + bin2Dec(binaryString2));
            String invalidBinaryString = "12345";
            System.out.println("Binary: " + invalidBinaryString + " => Decimal: " +
                    bin2Dec(invalidBinaryString));
        } catch (NumberFormatException ex) {
            System.out.println("Error: " + ex.getMessage());
        }
    }
}