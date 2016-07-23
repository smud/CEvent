//
// shim.h
//
// This source file is part of the SMUD open source project
//
// Copyright (c) 2016 SMUD project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See LICENSE.txt for license information
// See CONTRIBUTORS.txt for the list of SMUD project authors
//

#pragma once

#import <event2/event.h>
#import <event2/listener.h>
#import <event2/bufferevent.h>
#import <event2/buffer.h>

#include <errno.h>

extern inline int EVUTIL_SOCKET_ERROR_I()
{
    return EVUTIL_SOCKET_ERROR();
}

extern inline void EVUTIL_SET_SOCKET_ERROR_I(int error)
{
    EVUTIL_SET_SOCKET_ERROR(error);
}

extern inline int evutil_socket_geterror_i(int socket)
{
    return evutil_socket_geterror(socket);
}

extern const char * _Nonnull evutil_socket_error_to_string_i(int errcode)
{
    return evutil_socket_error_to_string(errcode);
}

// extern inline void helpers() { }

