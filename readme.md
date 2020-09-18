### What are whycon markers and how do they work?
Whycon markers are open source artificial markers a popular solution to the problem of localization, which are tailored for reliable detection and accurate localization. Working of these markers are based on efficient detection of a black and white roundel with known dimensions. These whycon markers work by combining on-demand thresholding, a flood-fill technique, and on-the-fly calculation of the detected pattern statistics.
This algorithm employs a quick flood-fill technique to look for contiguous segments of dark pixels. The ratio of each and every segment’s pixels to its bounding box area is then compared to a value calculated from the known dimensions of the searched pattern. If the test is passed, the algorithm starts to look around the segment’s centroid for another continuous area of bright pixels and again verifies if the number of pixels conforms to the value calculated from its bounding box dimensions. Successful pass of the second test indicates that the algorithm found two elliptical, roughly concentric patterns and therefore subsequent stage verifies if the ratio of their areas, concentricity and semi-axes dimensions conform with the known shape of the searched pattern. Once the segments found pass this test, the pattern’s 3D position is calculated based on its known dimensions, camera parameters, and the user-defined frame of reference.
This flood-fill technique can be initiated from any position within in the processed image without a performance penalty, which allows to start the search at a position predicted from the previous detection. This typically leads to a fast search that processes only pixels that belong to the actual pattern and its immediate vicinity, which significantly reduces the computational cost.
### 2) What are AruCo markers and how do they work?
ArUco markers are small 2D barcodes. Each ArUco marker corresponds to a number, encoded into a small grid of black and white pixels. The ArUco decoding algorithm is capable of locating, decoding, and of estimating the pose (location and orientation in space) of any ArUco markers in the camera's field of view.
ArUco markers are very useful as tags for many robotics and augmented reality applications. For example, one may place an ArUco next to a robot's charging station, an elevator button, or an object that a robot should manipulate.
ArUco markers can be created with several standard dictionaries. Different dictionaries give rise to different numbers of pixels in the markers, and to different numbers of possible symbols that can be created using the dictionary. The default dictionary used by JeVois is 4x4 with 50 symbols. Other dictionaries are also supported by setting the parameter dictionary over serial port or in a config file, up to 7x7 with 1000 symbols.
Detection Process in ArUco
The marker detection process of ArUco is as follows:
    • Apply an Adaptive Thresholding to obtain borders (Figure 1)
    • Find contours. After that, not only the real markers are detected but also a lot of undesired borders. The rest of the process aims to filter out unwanted borders.
    • Remove borders with a small number of points (Figure 2)
    • Polygonal approximation of contour and keep the concave contours with exactly 4 corners (i.e., rectangles) (Figure 3)
    • Sort corners in an anti-clockwise direction.
    • Remove too close rectangles. This is required because the adaptive threshold normally detects the internal an external part of the marker's border. At this stage, we keep the most external border. (Figure 4)
    • Marker Identification

            ▪ Remove the projection perspective so as to obtain a frontal view of the rectangle area using a homography (Figure 5)
            ▪ Threshold the area using Otsu. Otsu's algorithms assume a bimodal distribution and find the threshold that maximizes the extra-class variance while keeping a low intra-class variance.
            ▪ Identification of the internal code. If it is a marker, then it has an internal code. The marker is divided in a 6x6 grid, of which the internal 5x5 cells contains id information. The rest corresponds to the external black border. Here, we first check that the external black border is present. Afterward, we read the internal 5x5 cells and check if they provide a valid code (it might be required to rotate the code to get the valid one).
            ▪ For the valid markers, refine corners using subpixel interpolation
Finally, if camera parameters are provided, it is computed the extrinsics of the markers to the camera.

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


![Flow chart image](https://github.com/amancodeblast/Alphabot-Internship/blob/master/images/Closed-loop-control-system-with-PID-controller.png)


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

