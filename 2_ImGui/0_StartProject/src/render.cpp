#include <iostream>

#include <fmt/format.h>
#include <imgui.h>
#include <implot.h>

#include "render.hpp"

void WindowClass::Draw(std::string_view label)
{
    constexpr static auto window_flags = ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoCollapse |
    ImGuiWindowFlags_NoResize |ImGuiWindowFlags_NoScrollbar;
    constexpr static auto windowSize = ImVec2(1280.0F,720.0F);
    constexpr static auto windowPos = ImVec2(0.0F,0.0F);

    ImGui::SetNextWindowPos(windowPos);
    ImGui::SetNextWindowSize(windowSize);

    ImGui::Begin(label.data(),nullptr,window_flags);
    ImGui::Text("Hello World");
    ImGui::End();

}

void render(WindowClass &window_obj)
{
    window_obj.Draw("Label");
}
