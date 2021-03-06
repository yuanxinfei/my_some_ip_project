/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.12.v201801251434.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v0/commonapi/examples/E01HelloWorldSomeIPProxy.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v0 {
namespace commonapi {
namespace examples {

std::shared_ptr<CommonAPI::SomeIP::Proxy> createE01HelloWorldSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection) {
    return std::make_shared< E01HelloWorldSomeIPProxy>(_address, _connection);
}

void initializeE01HelloWorldSomeIPProxy() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:commonapi.examples.E01HelloWorld:v0_1:commonapi.examples.HelloWorld",
        0x1234, 0x5678, 0, 1);
     CommonAPI::SomeIP::Factory::get()->registerProxyCreateMethod(
         E01HelloWorld::getInterface(),
         &createE01HelloWorldSomeIPProxy);
}

INITIALIZER(registerE01HelloWorldSomeIPProxy) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializeE01HelloWorldSomeIPProxy);
}

E01HelloWorldSomeIPProxy::E01HelloWorldSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection)
        : CommonAPI::SomeIP::Proxy(_address, _connection )
    {
    }



        void E01HelloWorldSomeIPProxy::sayHello(const std::string &_name, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
            CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_name(_name, &::v0::commonapi::examples::E01HelloWorld_::sayHello_nameDeployment);
            CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_message(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
            CommonAPI::SomeIP::ProxyHelper<
                CommonAPI::SomeIP::SerializableArguments<
                    CommonAPI::Deployable<
                        std::string,
                        CommonAPI::SomeIP::StringDeployment
                    >
                >,
                CommonAPI::SomeIP::SerializableArguments<
                    CommonAPI::Deployable<
                        std::string,
                        CommonAPI::SomeIP::StringDeployment
                    >
                >
            >::callMethodWithReply(
            *this,
            CommonAPI::SomeIP::method_id_t(0x7530),
            true,
            false,
    (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
    deploy_name,
    _internalCallStatus,
    deploy_message);
    _message = deploy_message.getValue();
    }
    std::future<CommonAPI::CallStatus> E01HelloWorldSomeIPProxy::sayHelloAsync(const std::string &_name, SayHelloAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_name(_name, &::v0::commonapi::examples::E01HelloWorld_::sayHello_nameDeployment);
        CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_message(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
        return CommonAPI::SomeIP::ProxyHelper<
            CommonAPI::SomeIP::SerializableArguments<
                CommonAPI::Deployable<
                    std::string,
                    CommonAPI::SomeIP::StringDeployment
                >
            >,
            CommonAPI::SomeIP::SerializableArguments<
                CommonAPI::Deployable<
                    std::string,
                    CommonAPI::SomeIP::StringDeployment
                >
            >
        >::callMethodAsync(
            *this,
            CommonAPI::SomeIP::method_id_t(0x7530),
            true,
            false,
            (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
            deploy_name,
            [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment > _message) {
                if (_callback)
                    _callback(_internalCallStatus, _message.getValue());
            },
            std::make_tuple(deploy_message));
    }



    void E01HelloWorldSomeIPProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 0;
    ownVersionMinor = 1;
    }

} // namespace examples
} // namespace commonapi
} // namespace v0
