#include "caffe/caffe.hpp"
namespace caffe
{
	REGISTER_LAYER_CLASS(Im2col);
	REGISTER_LAYER_CLASS(Data);
	REGISTER_LAYER_CLASS(Accuracy);
	REGISTER_LAYER_CLASS(ArgMax);
	REGISTER_LAYER_CLASS(BN);
	REGISTER_LAYER_CLASS(BNLL);
	REGISTER_LAYER_CLASS(Concat);
	REGISTER_LAYER_CLASS(ContrastiveLoss);
	REGISTER_LAYER_CLASS(Deconvolution);
	REGISTER_LAYER_CLASS(Dropout);
	REGISTER_LAYER_CLASS(DummyData);
	REGISTER_LAYER_CLASS(Eltwise);
	REGISTER_LAYER_CLASS(EuclideanLoss);
	REGISTER_LAYER_CLASS(InnerProduct);
	REGISTER_LAYER_CLASS(SoftmaxWithLoss);
	REGISTER_LAYER_CLASS(Exp);
	REGISTER_LAYER_CLASS(Filter);
	REGISTER_LAYER_CLASS(Flatten);
	REGISTER_LAYER_CLASS(HDF5Data);
	REGISTER_LAYER_CLASS(HDF5Output);
	REGISTER_LAYER_CLASS(HingeLoss);
	REGISTER_LAYER_CLASS(ImageData);
	REGISTER_LAYER_CLASS(InfogainLoss);
	REGISTER_LAYER_CLASS(Insanity);
	REGISTER_LAYER_CLASS(Local);
	REGISTER_LAYER_CLASS(Log);
	REGISTER_LAYER_CLASS(MemoryData);
	REGISTER_LAYER_CLASS(MultinomialLogisticLoss);
	REGISTER_LAYER_CLASS(MVN);
	REGISTER_LAYER_CLASS(Normalize);
	REGISTER_LAYER_CLASS(Power);
	REGISTER_LAYER_CLASS(PReLU);
	REGISTER_LAYER_CLASS(Reduction);
	REGISTER_LAYER_CLASS(Reshape);
	REGISTER_LAYER_CLASS(ROIPooling);
	REGISTER_LAYER_CLASS(SigmoidCrossEntropyLoss);
	REGISTER_LAYER_CLASS(Silence);
	REGISTER_LAYER_CLASS(Slice);
	REGISTER_LAYER_CLASS(SmoothL1Loss);
	REGISTER_LAYER_CLASS(Split);
	REGISTER_LAYER_CLASS(SPP);
	REGISTER_LAYER_CLASS(Threshold);
	REGISTER_LAYER_CLASS(Transformer);
	REGISTER_LAYER_CLASS(TripletLoss);
	REGISTER_LAYER_CLASS(WindowData);
	REGISTER_LAYER_CLASS(Embed);
	REGISTER_LAYER_CLASS(Tile);
	REGISTER_LAYER_CLASS(BatchNorm);
	REGISTER_LAYER_CLASS(EltwiseAffine);
	REGISTER_LAYER_CLASS(Gram);
	REGISTER_SOLVER_CLASS(AdaDelta);
	REGISTER_SOLVER_CLASS(AdaGrad);
	REGISTER_SOLVER_CLASS(Adam);
	REGISTER_SOLVER_CLASS(Nesterov);
	REGISTER_SOLVER_CLASS(RMSProp);
	REGISTER_SOLVER_CLASS(SGD);
}

