#pragma once

#include <AzCore/EBus/EBus.h>

namespace Lumberyard_Food
{
    class Lumberyard_FoodRequests
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static const AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static const AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////

        // Put your public methods here
    };
    using Lumberyard_FoodRequestBus = AZ::EBus<Lumberyard_FoodRequests>;
} // namespace Lumberyard_Food
