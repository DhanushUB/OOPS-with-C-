Write a program that will prompt the user for two polynomials and display information about each one. The program will compute and display the derivative of each polynomial. The program will also take the two polynomials and add and subtract them. 
A polynomial is a function of a single variable, say x, with a special mathematical formula that consists of the summation of some number of terms. Each term has the form ai xi, where ai is a coecient and i is the exponent of the term. We will assume that ai is a non-zero integer and that the exponent is a positive integer or zero. You will represent each term as a value pair, i.e. the term ai xi is represented as (ai, i). The degree of a polynomial is the exponent of the term with the highest exponent. The number of terms of a polynomial is the count of how many terms have non-zero 1 coecients. The derivative of a polynomial is another polynomial. It is straightforward to compute the derivative of a polynomial by just individually taking the derivative of each its terms to build the derivative.
Consider the following polynomial as an example:  ?24x?^7+ ?6x?^2+14x+10
This polynomial has degree 7 and 4 terms. You will represent a polynomial in your program as a list of terms ordered from highest to lowest by their exponent values. We will also display a polynomial by displaying its terms in this order as well (shown above).  It would be represented by the list f(24; 7), (??6; 2), (14; 1), (10; 0)g. Note that the last value pair in this example is the term ???1x?^0. Though, we won't show x^0when displaying this term (see above). In addition, we won't display the exponent on a term with degree 1 (see above). The derivative of a term a_i x_i is a new term whose coecient is a_i and exponent is i ?? 1. The derivative of a constant term, i.e. a_i x_0, is zero.  Lastly, since a polynomial is a function, i.e. f(x) = ?3x?^8  ??+ ?2x?^2+10x ??1
In our example above, it may be evaluated given a value for variable x. For example, evaluate the polynomial at x = 2, i.e.   f(2)= ?3(2)?^8  ??+ ?2(2)?^2+10(2) ??1
polynomial multiplication Example:

   [by hand]

                       x^2 +  2x + 4
                    * 3x^2 +  2x + 1
                    ----------------
                       x^2 +  2x + 4
              2x^3 +  4x^2 +  8x
       3x^4 + 6x^3 + 12x^2
       -----------------------------
       3x^4 + 8x^3 + 17x^2 + 10x + 4



