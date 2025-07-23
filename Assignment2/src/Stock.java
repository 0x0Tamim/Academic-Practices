public class Stock {
    String symbol;
    String name;
    double previousClosingPrice;
    double currentPrice;

    public Stock(String symbol, String name) {
        this.symbol = symbol;
        this.name = name;
    }

    public void setPreviousClosingPrice(double previousClosingPrice) {
        this.previousClosingPrice = previousClosingPrice;
    }

    public double getPreviousClosingPrice() {
        return previousClosingPrice;
    }

    public void setCurrentPrice(double currentPrice) {
        this.currentPrice = currentPrice;
    }

    public double getCurrentPrice() {
        return currentPrice;
    }

    public double getChangePercent() {
        return ((currentPrice - previousClosingPrice) / previousClosingPrice) * 100;
    }


    public static void main(String[] args) {
        Stock oracleStock = new Stock("ORCL", "Oracle Corporation");
        oracleStock.setPreviousClosingPrice(34.5);
        oracleStock.setCurrentPrice(34.35);
        System.out.printf("The price-change percentage is: %.2f%%\n", oracleStock.getChangePercent());
    }

}