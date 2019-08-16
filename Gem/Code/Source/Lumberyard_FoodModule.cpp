
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include <Lumberyard_FoodSystemComponent.h>

namespace Lumberyard_Food
{
    class Lumberyard_FoodModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(Lumberyard_FoodModule, "{E62C9162-D156-4064-8AB4-03A42D2FC6B1}", AZ::Module);
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
AZ_DECLARE_MODULE_CLASS(Lumberyard_Food_6a1a547ff09243a98bb6899f6776635e, Lumberyard_Food::Lumberyard_FoodModule)
