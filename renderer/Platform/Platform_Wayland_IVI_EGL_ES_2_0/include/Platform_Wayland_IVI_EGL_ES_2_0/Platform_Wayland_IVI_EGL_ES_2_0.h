//  -------------------------------------------------------------------------
//  Copyright (C) 2015 BMW Car IT GmbH
//  -------------------------------------------------------------------------
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at https://mozilla.org/MPL/2.0/.
//  -------------------------------------------------------------------------

#ifndef RAMSES_PLATFORM_WAYLAND_IVI_EGL_ES_2_0_H
#define RAMSES_PLATFORM_WAYLAND_IVI_EGL_ES_2_0_H

#include "PlatformFactory_Wayland_IVI_EGL/PlatformFactory_Wayland_IVI_EGL.h"

namespace ramses_internal
{
    class Platform_Wayland_IVI_EGL_ES_2_0 : public PlatformFactory_Wayland_IVI_EGL
    {
    public:
        Platform_Wayland_IVI_EGL_ES_2_0(const RendererConfig& rendererConfig);

        virtual IDevice*      createDevice(IContext& context) override final;

    protected:
        void getContextAttributes(Vector<EGLint>& attributes) const override final;
        void getSurfaceAttributes(UInt32 msaaSampleCount, Vector<EGLint>& attributes) const override final;
    };
}

#endif