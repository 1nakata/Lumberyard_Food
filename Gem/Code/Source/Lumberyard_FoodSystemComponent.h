#pragma once

#include <AzCore/Component/Component.h>

#include <Lumberyard_Food/Lumberyard_FoodBus.h>

namespace Lumberyard_Food
{
    class Lumberyard_FoodSystemComponent
        : public AZ::Component
        , protected Lumberyard_FoodRequestBus::Handler
    {
    public:
        AZ_COMPONENT(Lumberyard_FoodSystemComponent, "{09604353-91D7-4E2A-96CE-4669D5DFB87E}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // Lumberyard_FoodRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
