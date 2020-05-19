# Calculate PI using a random number
 Calculate PI using random numbers:

 1.'srand' is used to create some random seeds with which 'rand' create the ramdom numbers

 2.'rand() / double(RAND_MAX)' means the random number range from 0 to 1;
 3.(x,y) is a random point in the unit square;
 4.if 'z=x * x + y * y' is euqal or small than 1, then the random point is in the unit circle
 5.use 'std::cout << "The run time is: " << (double)clock() / CLOCKS_PER_SEC << "s" << std::endl' to output the run time.
