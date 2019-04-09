/*
 * pocket-tensor (c) 2018 Gustavo Valiente gustavo.valiente.m@gmail.com
 * Kerasify (c) 2016 Robert W. Rose
 *
 * MIT License, see LICENSE file.
 */

#ifndef PT_CONV_2D_LAYER_H
#define PT_CONV_2D_LAYER_H

#include "pt_tensor.h"
#include "pt_activation_layer.h"

namespace pt
{

class Conv2DLayer : public Layer
{

public:
    static std::unique_ptr<Conv2DLayer> create(std::istream& stream);

    bool apply(LayerData& layerData) const final;

protected:
    Tensor _weights;
    Tensor _biases;
    std::unique_ptr<ActivationLayer> _activation;

    Conv2DLayer(Tensor&& weights, Tensor&& biases, std::unique_ptr<ActivationLayer>&& activation) noexcept;
};

}

#endif
