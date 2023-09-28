# opengl3-glfw-imgui-template

This is a reference design that demonstrates how to integrate OpenGL 3.3, GLFW, and Dear ImGui into a simple user application.

## Windows Notes

The GLAD generator utilizes the Jinja2 Python library, so it needs to be installed:

```bash
pip install -U Jinja2
```

## Linux Notes

In order to build this project, make sure that `xorg-dev` is installed:

```bash
sudo apt-get install xorg-dev
```

## References

The excellent [OloEngine Project](https://github.com/drsnuggles8/OloEngineBase) was referenced when creating this template in order to learn how to better organize a large-scale project and use real-world CMake in general. I feel that the author, drsnuggles8, did a tremendous job of managing the complexity of their project.
