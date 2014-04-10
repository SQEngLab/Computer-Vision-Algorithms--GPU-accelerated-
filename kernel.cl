/*
* Kernel
*/
__kernel square( __global float * input, __global float * output, __global int N){
	int i = get_global_id(0);
	
	if(i >= N)
		return;
	
	output[i] = input[i] * input[i];
}
