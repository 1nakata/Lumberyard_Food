
#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/EditContext.h>
#include <AzCore/Serialization/EditContextConstants.inl>

#include <Lumberyard_FoodSystemComponent.h>

namespace Lumberyard_Food
{
    void Lumberyard_FoodSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (AZ::SerializeContext* serialize = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serialize->Class<Lumberyard_FoodSystemComponent, AZ::Component>()
                ->Version(0)
                ;

            if (AZ::EditContext* ec = serialize->GetEditContext())
            {
                ec->Class<Lumberyard_FoodSystemComponent>("Lumberyard_Food", "[Description of functionality provided by this System Component]")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                        ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC("System"))
                        ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ;
            }
        }
    }

    void Lumberyard_FoodSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC("Lumberyard_FoodService"));
    }

    void Lumberyard_FoodSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC("Lumberyard_FoodService"));
    }

    void Lumberyard_FoodSystemComponent::GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required)
    {
        AZ_UNUSED(required);
    }

    void Lumberyard_FoodSystemComponent::GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
        AZ_UNUSED(dependent);
    }

    void Lumberyard_FoodSystemComponent::Init()
    {
    }

    void Lumberyard_FoodSystemComponent::Activate()
    {
        Lumberyard_FoodRequestBus::Handler::BusConnect();
    }

    void Lumberyard_FoodSystemComponent::Deactivate()
    {
        Lumberyard_FoodRequestBus::Handler::BusDisconnect();
    }
}
