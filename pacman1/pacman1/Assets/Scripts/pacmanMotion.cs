using UnityEngine;
using System.Collections;


public class pacmanMotion : MonoBehaviour {


	float xdir;
	float zdir;

	float initialXDir;
	float initialZDir;


	Gyroscope initialGyroscope;
	Vector3 accelerations;

	// Use this for initialization
	void Start () {

	//	Globals globals = GetComponents<Globals> ();

		Globals.isRotating = false;


		accelerations = Input.acceleration;

		xdir = 0.0f;
		zdir = 0.0f;

		initialXDir = accelerations.x;
		initialZDir = accelerations.z;

		initialGyroscope = Input.gyro; 



	}
	
	// Update is called once per frame
	void Update () {
			
		accelerations = Input.acceleration;




		float xIncrementalFactor = 0.0f;
		bool forward = false;
		bool backward = false;
		bool whileRotation = false;





		//print (Globals.isRotating);


		Gyroscope gyroscopes = Input.gyro;



			
		if (initialGyroscope.attitude.eulerAngles == gyroscopes.attitude.eulerAngles) {
		
			if (accelerations.x >0.03f) {
				transform.position = new Vector3 (0, 0, transform.position.z+0.10f);// transform.position.z + zdir * 0.02f);
			} 
			if (accelerations.x <-0.03f) {
				transform.position = new Vector3 (0, 0, transform.position.x-0.10f);// transform.position.z + zdir * 0.02f);
			} 
		
		} else {
		

		
		}







//		Gyroscope gyroscopes = Input.gyro;
//		float newXDir = accelerations.x;
//		float newZDir = accelerations.z;
//		if (newZDir - initialZDir> 0.02) {
//			print ("z is "+newZDir);
//			initialZDir = newZDir ;
//		} 
//		if (newXDir - initialXDir> 0.02) {
//
//			print ("x is "+newXDir);
//		}

//		if ((newXDir - initialXDir) > 5.0f) {
//		
//			initialXDir = newXDir;
//			xdir = 1.0f;
//
//		} else 
//		if ((newXDir - initialXDir) < 5.0f) {
//			
//			initialXDir = newXDir;
//			xdir = -1.0f;
//
//		} else {
//		
//			xdir = 0;
//			initialXDir = newXDir;
//		
//		}
//
//		if ((newZDir - initialZDir) > 5.0f) {
//			
//			initialZDir = newZDir;
//			zdir = 1.0f;
//			
//		} else 
//		if ((newZDir - initialZDir) < 5.0f) {
//			
//			initialZDir = newZDir;
//			zdir = -1.0f;
//			
//		} else {
//			
//			zdir = 0;
//			initialZDir = newZDir;
//			
//		}

		//print (gyroscopes.attitude.eulerAngles);

//		if (accelerations.x >0.03f) {
//			transform.position = new Vector3 (transform.position.x+0.10f, 0, 0);// transform.position.z + zdir * 0.02f);
//		} 
//		if (accelerations.x <-0.03f) {
//			transform.position = new Vector3 (transform.position.x-0.10f, 0, 0);// transform.position.z + zdir * 0.02f);
//		} 

	}
}
