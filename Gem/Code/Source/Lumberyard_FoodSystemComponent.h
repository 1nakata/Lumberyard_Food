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
        AZ_COMPONENT(Lumberyard_FoodSystemComponent, "{C6A1F521-065A-4C30-9CF9-64C949A96F4F}");

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
