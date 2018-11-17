# Pointer Event Timing

Built with of_v0.10.0_osx_release

This example shows the timing inaccuracy `ofGetElapsedTimeMicros()` inside of the pointer event handler.

In the mouse move event, this program logs:

- the delta time - milliseconds since the last mouse move event. 
- distance - the distance the mouse traveled since the last move event
- delta X/Y - The x/y pixels moved since last movement event

When moving the mouse at a consistent rate, we see very large fluctuation in delta T, and little or no fluxuations in delta XY.

This example is for OSX, but I have seen similar issues on iOS.

## Sample Output:

```
[notice ] delta: 16.37 ms --  4.00 pixels -- ( 4,  0) xy delta
[notice ] delta:  0.17 ms --  3.00 pixels -- ( 3,  0) xy delta
[notice ] delta: 16.07 ms --  1.00 pixels -- ( 1,  0) xy delta
[notice ] delta:  0.14 ms --  3.16 pixels -- ( 3, -1) xy delta
[notice ] delta: 16.62 ms --  3.00 pixels -- ( 3,  0) xy delta
[notice ] delta:  0.14 ms --  2.00 pixels -- ( 2,  0) xy delta
[notice ] delta: 16.50 ms --  5.00 pixels -- ( 5,  0) xy delta
[notice ] delta: 16.12 ms --  3.16 pixels -- ( 3, -1) xy delta
[notice ] delta:  0.26 ms --  2.00 pixels -- ( 2,  0) xy delta
[notice ] delta: 16.78 ms --  2.00 pixels -- ( 2,  0) xy delta
[notice ] delta:  0.18 ms --  3.00 pixels -- ( 3,  0) xy delta
[notice ] delta: 16.69 ms --  3.00 pixels -- ( 3,  0) xy delta
[notice ] delta:  0.14 ms --  3.16 pixels -- ( 3, -1) xy delta
[notice ] delta: 16.18 ms --  2.00 pixels -- ( 2,  0) xy delta
[notice ] delta:  0.13 ms --  3.00 pixels -- ( 3,  0) xy delta
[notice ] delta: 16.33 ms --  3.00 pixels -- ( 3,  0) xy delta
[notice ] delta:  0.22 ms --  2.00 pixels -- ( 2,  0) xy delta
[notice ] delta: 16.01 ms --  2.00 pixels -- ( 2,  0) xy delta
[notice ] delta:  0.20 ms --  3.00 pixels -- ( 3,  0) xy delta
[notice ] delta: 16.08 ms --  6.00 pixels -- ( 6,  0) xy delta
[notice ] delta: 18.28 ms --  7.07 pixels -- ( 7, -1) xy delta
[notice ] delta: 15.84 ms --  6.00 pixels -- ( 6,  0) xy delta
[notice ] delta: 16.23 ms --  5.10 pixels -- ( 5, -1) xy delta
[notice ] delta: 17.22 ms --  6.00 pixels -- ( 6,  0) xy delta
[notice ] delta: 16.46 ms --  6.08 pixels -- ( 6, -1) xy delta
[notice ] delta: 16.24 ms --  7.07 pixels -- ( 7, -1) xy delta
[notice ] delta: 17.38 ms --  6.00 pixels -- ( 6,  0) xy delta
[notice ] delta: 17.40 ms --  6.08 pixels -- ( 6, -1) xy delta
[notice ] delta:  0.14 ms --  5.10 pixels -- ( 5, -1) xy delta
[notice ] delta: 15.23 ms --  2.00 pixels -- ( 2,  0) xy delta
[notice ] delta: 17.48 ms --  4.12 pixels -- ( 4, -1) xy delta
[notice ] delta:  0.14 ms --  2.00 pixels -- ( 2,  0) xy delta
[notice ] delta: 16.38 ms --  2.00 pixels -- ( 2,  0) xy delta
[notice ] delta:  0.14 ms --  1.00 pixels -- ( 1,  0) xy delta
[notice ] delta: 16.29 ms --  1.00 pixels -- ( 1,  0) xy delta
[notice ] delta:  0.13 ms --  1.00 pixels -- ( 1,  0) xy delta
[notice ] delta: 17.02 ms --  1.41 pixels -- ( 1, -1) xy delta
[notice ] delta:  0.14 ms --  1.00 pixels -- ( 1,  0) xy delta
[notice ] delta: 16.31 ms --  0.00 pixels -- ( 0,  0) xy delta
[notice ] delta:  0.14 ms --  1.00 pixels -- ( 1,  0) xy delta
[notice ] delta: 17.02 ms --  0.00 pixels -- ( 0,  0) xy delta
[notice ] delta:  0.13 ms --  0.00 pixels -- ( 0,  0) xy delta
[notice ] delta: 15.80 ms --  1.00 pixels -- ( 1,  0) xy delta
```



