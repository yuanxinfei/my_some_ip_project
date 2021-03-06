/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.12.v201801251434.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_COMMONAPI_EXAMPLES_E01_HELLO_WORLD_SOMEIP_STUB_ADAPTER_HPP_
#define V0_COMMONAPI_EXAMPLES_E01_HELLO_WORLD_SOMEIP_STUB_ADAPTER_HPP_

#include <v0/commonapi/examples/E01HelloWorldStub.hpp>
#include <v0/commonapi/examples/E01HelloWorldSomeIPDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>
#include <CommonAPI/SomeIP/StubAdapterHelper.hpp>
#include <CommonAPI/SomeIP/StubAdapter.hpp>
#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Constants.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v0 {
namespace commonapi {
namespace examples {

template <typename _Stub = ::v0::commonapi::examples::E01HelloWorldStub, typename... _Stubs>
class E01HelloWorldSomeIPStubAdapterInternal
    : public virtual E01HelloWorldStubAdapter,
      public CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...>
{
public:
    typedef CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...> E01HelloWorldSomeIPStubAdapterHelper;

    ~E01HelloWorldSomeIPStubAdapterInternal() {
        deactivateManagedInstances();
        E01HelloWorldSomeIPStubAdapterHelper::deinit();
    }

    void deactivateManagedInstances() {
    }

    static CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v0::commonapi::examples::E01HelloWorldStub,
        CommonAPI::Version
    > getE01HelloWorldInterfaceVersionStubDispatcher;


    
    static CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v0::commonapi::examples::E01HelloWorldStub,
        std::tuple< std::string>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > sayHelloStubDispatcher;

    E01HelloWorldSomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        E01HelloWorldSomeIPStubAdapterHelper(
            _address,
            _connection,
            std::dynamic_pointer_cast< E01HelloWorldStub>(_stub))
    {

        
                E01HelloWorldSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x7530) }, &sayHelloStubDispatcher );
        // Provided events/fields
    }

private:
};

template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::GetAttributeStubDispatcher<
    ::v0::commonapi::examples::E01HelloWorldStub,
    CommonAPI::Version
    > E01HelloWorldSomeIPStubAdapterInternal<_Stub, _Stubs...>::getE01HelloWorldInterfaceVersionStubDispatcher(&E01HelloWorldStub::lockInterfaceVersionAttribute, &E01HelloWorldStub::getInterfaceVersion, false);

template <typename _Stub, typename... _Stubs>
CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v0::commonapi::examples::E01HelloWorldStub,
    std::tuple< std::string>,
    std::tuple< std::string>,
    std::tuple< CommonAPI::SomeIP::StringDeployment>,
    std::tuple< CommonAPI::SomeIP::StringDeployment>
> E01HelloWorldSomeIPStubAdapterInternal<_Stub, _Stubs...>::sayHelloStubDispatcher(
    &E01HelloWorldStub::sayHello,
    false,
    std::make_tuple(&::v0::commonapi::examples::E01HelloWorld_::sayHello_nameDeployment),
    std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)));

template <typename _Stub = ::v0::commonapi::examples::E01HelloWorldStub, typename... _Stubs>
class E01HelloWorldSomeIPStubAdapter
    : public E01HelloWorldSomeIPStubAdapterInternal<_Stub, _Stubs...>,
      public std::enable_shared_from_this< E01HelloWorldSomeIPStubAdapter<_Stub, _Stubs...>> {
public:
    E01HelloWorldSomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub)
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          E01HelloWorldSomeIPStubAdapterInternal<_Stub, _Stubs...>(_address, _connection, _stub) {
    }
};

} // namespace examples
} // namespace commonapi
} // namespace v0

#endif // V0_COMMONAPI_EXAMPLES_E01_Hello_World_SOMEIP_STUB_ADAPTER_HPP_
