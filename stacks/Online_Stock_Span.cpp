#include <bits/stdc++.h>
using namespace std;

/*
Design an algorithm that collects daily price quotes for some stock and returns the span of that stock's price for the current day.

The span of the stock's price in one day is the maximum number of consecutive days (starting from that day and going backward) for which the stock price was less than or equal to the price of that day.

For example, if the prices of the stock in the last four days is [7,2,1,2] and the price of the stock today is 2, then the span of today is 4 because starting from today, the price of the stock was less than or equal 2 for 4 consecutive days.

*/

class StockSpanner
{
public:
    stack<pair<int, int>> st;

    StockSpanner()
    {
        // constructor
    }

    int next(int price)
    {
        int span = 1;

        while (!st.empty() && st.top().first <= price)
        {
            span += st.top().second;
            st.pop();
        }

        st.push({price, span});
        return span;
    }
};

int main()
{
    StockSpanner ss;

    int n;
    cout << "Enter number of days: ";
    cin >> n;

    cout << "Enter stock prices:\n";
    for (int i = 0; i < n; i++)
    {
        int price;
        cin >> price;
        cout << "Span for " << price << " = " << ss.next(price) << endl;
    }

    return 0;
}
