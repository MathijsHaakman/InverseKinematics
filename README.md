# Inverse kinematics project

This repository is a school project for working with a [robot arm](https://www.trossenrobotics.com/p/phantomx-ax-12-reactor-robot-arm.aspx). It makes use of the CCD algorithm to rotate the segments of the arm so that the endpoint is in a certain specified location.

## TODO
* Fix bug where the angle of the segment doesn't get calculated in relation to the previous one
* Add constraints to segments
* Add damping to segments