// Copyright 2017-2018 zzu_softboy <zzu_softboy@163.com>
// Copyright 2013, 2014 Copernica BV
// Emiel Bruijntjes <emiel.bruijntjes@copernica.com>
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Created by softboy on 2017/08/01.

#ifndef ZAPI_LANG_INTERNAL_STDCLASS_PRIVATE_H
#define ZAPI_LANG_INTERNAL_STDCLASS_PRIVATE_H

#include "zapi/Global.h"

// class forware declare with namespace
namespace zapi
{
namespace ds
{

class ObjectVariant;

} // ds
} // zapi

namespace zapi
{
namespace lang
{
namespace internal
{

using zapi::ds::ObjectVariant;

class StdClassPrivate
{
public:
   StdClassPrivate();
   zend_object *m_zendObject = nullptr;
   std::unique_ptr<ObjectVariant> m_objVariant;
};
} // internal
} // lang
} // zapi

#endif // ZAPI_LANG_INTERNAL_STDCLASS_PRIVATE_H
