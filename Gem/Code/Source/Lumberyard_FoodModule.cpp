
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include <Lumberyard_FoodSystemComponent.h>

namespace Lumberyard_Food
{
    class Lumberyard_FoodModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(Lumberyard_FoodModule, "{B57699EA-B937-4523-954D-D466033543F9}", AZ::Module);
        AZ_CLASS_ALLOCATOR(Lumberyard_FoodModule, AZ::SystemAllocator, 0);

        Lumberyard_FoodModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                Lumberyard_FoodSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<Lumberyard_FoodSystemComponent>(),
            };
        }
    };
}

// DO NOT MODIFY THIS LINE UNLESS YOU RENAME THE GEM
// The first parameter should be GemName_GemIdLower
// The second should be the fully qualified name of the class above
AZ_DECLARE_MODULE_CLASS(Lumberyard_Food_ff2280ccd5b24c5988d6d300cd09ccd3, Lumberyard_Food::Lumberyard_FoodModule)
