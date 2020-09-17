### What are whycon markers and how do they work?


### What are AruCo markers and how do they work?
Binary square fiducial markers for pose estimation of a camera with the inner blocks adding the funcitonality to ladmaeks and parity check making it robust


## Difference between open-loop and closed loop controllers?

An open loop controller doesnt consider the input from the sensor in order to vary the control command. The closed loop controller have a feedback loop in order to consider the amount of changes necessary according to the current scenario. This feedback loop comes from the sensor. This type of controller is more successful as it considers the variability and the randomness of a physical system. 


## What are PID controllers?
Its a closed loop controller i.e feedback is incorporated using the sensor reading to correct the output to match it with the desired output. A PID controller is a controller based on 3 main and fundamental controller design known as P-proportional, D-Dervative and I-Integral. 

P Controller or Proportional controller which steers proprotional to the cross track error

**Drawback**
But here car overshoots

**PD controller**
to deal with the oscillation problem to keep track of the rate of change of cross track error. 
Drawback
If the value of tau is increased, the oscilation is faster. It makes the passenger sea sick.

**Systematic Bias**
Simulate a senario where the mechanic of the car shifted the steering angle to a 10 degree offset

and first set the tau_d or the differential part to 0 and then set it back to its initial value i.e 3. does it solve the problem no. No right. Well thats why we also need the last piece of the puzzle.

**Integral term**
Summation of all the CTE is also inportant in as it should not be constantly increasing meaning that the CTE must not be constant and if it is then we must steer more.




### Flow chart to explain the working of a PID algorithm





### Optimum way to tune a PID controller
**Manual tuning**
n many cases, simple manual tuning can give reasonably good performance. As a first attempt, you can start by:

Setting Kp to something small and Ki = Kd = 0,
Slowly increasing Kp to decrease rise time,
Slowly increase Kd to reduce overshoot and settling time.
By adjusting the gains “by hand”, you will quickly realize that the faster the system response is, the worse stability is. The converse is also true. The trick is to find a balance between the two. However, finding an approximate solution using the above stated method can often serve as a starting point for more systematic tuning methods, such as the gradient descent algorithm that we will discuss next!



**Twiddle** 
using algorithm one can automate the task in an efficient way in order to tune it. You basically tune it until you have a decent setting. Until then you keep adjusting the values of constants Kp, Kd & Ki with a slight change. This is kind of a brute force method and there are other methods that can be more efficient. 
 



References (Videos/websites/books/papers)

